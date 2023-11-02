
@interface SFViewEmailCommand : SFCommand <NSCopying, NSSecureCoding, SFViewEmailCommand> {
    struct { 
        unsigned int placeHolderProperty : 1; 
    }  _has;
    bool  _placeHolderProperty;
}

@property (nonatomic, copy) NSData *backendData;
@property (nonatomic, copy) NSString *commandDetail;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SFTopic *normalizedTopic;
@property (nonatomic) bool placeHolderProperty;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasPlaceHolderProperty;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)placeHolderProperty;
- (void)setPlaceHolderProperty:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec

- (int)_cpCommandType;

@end
