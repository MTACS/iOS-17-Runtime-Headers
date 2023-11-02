
@interface ICIAMMessageAction : PBCodable <NSCopying> {
    NSMutableArray * _actionParameters;
    ICIAMMetricEvent * _clickEvent;
    NSString * _displayText;
    struct { 
        unsigned int messageRemovalPolicy : 1; 
        unsigned int requiresDelegate : 1; 
    }  _has;
    NSString * _identifier;
    int  _messageRemovalPolicy;
    bool  _requiresDelegate;
    NSString * _uRL;
}

@property (nonatomic, retain) NSMutableArray *actionParameters;
@property (nonatomic, retain) ICIAMMetricEvent *clickEvent;
@property (nonatomic, retain) NSString *displayText;
@property (nonatomic, readonly) bool hasClickEvent;
@property (nonatomic, readonly) bool hasDisplayText;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic) bool hasMessageRemovalPolicy;
@property (nonatomic) bool hasRequiresDelegate;
@property (nonatomic, readonly) bool hasURL;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) int messageRemovalPolicy;
@property (nonatomic) bool requiresDelegate;
@property (nonatomic, retain) NSString *uRL;

// Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud

+ (Class)actionParametersType;

- (void).cxx_destruct;
- (int)StringAsMessageRemovalPolicy:(id)arg1;
- (id)actionParameters;
- (id)actionParametersAtIndex:(unsigned long long)arg1;
- (unsigned long long)actionParametersCount;
- (void)addActionParameters:(id)arg1;
- (void)clearActionParameters;
- (id)clickEvent;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayText;
- (bool)hasClickEvent;
- (bool)hasDisplayText;
- (bool)hasIdentifier;
- (bool)hasMessageRemovalPolicy;
- (bool)hasRequiresDelegate;
- (bool)hasURL;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)messageRemovalPolicy;
- (id)messageRemovalPolicyAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (bool)requiresDelegate;
- (void)setActionParameters:(id)arg1;
- (void)setClickEvent:(id)arg1;
- (void)setDisplayText:(id)arg1;
- (void)setHasMessageRemovalPolicy:(bool)arg1;
- (void)setHasRequiresDelegate:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMessageRemovalPolicy:(int)arg1;
- (void)setRequiresDelegate:(bool)arg1;
- (void)setURL:(id)arg1;
- (id)uRL;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/InAppMessagesCore.framework/InAppMessagesCore

- (id)dictionaryRepresentationWithReportableMetricsEvents;

@end
