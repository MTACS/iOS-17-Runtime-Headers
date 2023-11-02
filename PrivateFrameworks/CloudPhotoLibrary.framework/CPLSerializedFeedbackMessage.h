
@interface CPLSerializedFeedbackMessage : NSObject {
    NSString * _feedbackType;
    CPLServerFeedbackMessage * _serverMessage;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSString *feedbackType;
@property (nonatomic, readonly) CPLServerFeedbackMessage *serverMessage;
@property (nonatomic, readonly) NSUUID *uuid;

+ (id)messagesForPlistRepresentation:(id)arg1;
+ (id)plistRepresentationForMessages:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feedbackType;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithMessage:(id)arg1;
- (id)serverMessage;
- (id)uuid;

@end
