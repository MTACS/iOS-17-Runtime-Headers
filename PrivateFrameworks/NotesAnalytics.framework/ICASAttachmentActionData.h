
@interface ICASAttachmentActionData : NSObject <AADataEventType> {
    ICASActionType * _actionType;
}

@property (nonatomic, readonly) ICASActionType *actionType;

+ (id)dataName;

- (void).cxx_destruct;
- (id)actionType;
- (id)initWithActionType:(id)arg1;
- (id)toDict;

@end
