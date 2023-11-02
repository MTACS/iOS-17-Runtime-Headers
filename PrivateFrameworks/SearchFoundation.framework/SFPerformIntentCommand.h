
@interface SFPerformIntentCommand : SFCommand <NSCopying, NSSecureCoding, SFPerformIntentCommand> {
    NSString * _applicationBundleIdentifier;
    struct { 
        unsigned int isRunnableWorkflow : 1; 
    }  _has;
    NSData * _intentMessageData;
    NSString * _intentMessageName;
    bool  _isRunnableWorkflow;
}

@property (nonatomic, copy) NSString *applicationBundleIdentifier;
@property (nonatomic, copy) NSData *backendData;
@property (nonatomic, copy) NSString *commandDetail;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSData *intentMessageData;
@property (nonatomic, copy) NSString *intentMessageName;
@property (nonatomic) bool isRunnableWorkflow;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SFTopic *normalizedTopic;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationBundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIsRunnableWorkflow;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)intentMessageData;
- (id)intentMessageName;
- (bool)isEqual:(id)arg1;
- (bool)isRunnableWorkflow;
- (id)jsonData;
- (void)setApplicationBundleIdentifier:(id)arg1;
- (void)setIntentMessageData:(id)arg1;
- (void)setIntentMessageName:(id)arg1;
- (void)setIsRunnableWorkflow:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec

- (int)_cpCommandType;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (Class)_searchUICommandHandlerClass;

@end
