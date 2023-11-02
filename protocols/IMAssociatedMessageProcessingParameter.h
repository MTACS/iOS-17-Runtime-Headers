
@protocol IMAssociatedMessageProcessingParameter <IMTextMessageProcessingParameter>

@required

- (NSString *)associatedMessageGUID;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })associatedMessageRange;
- (long long)associatedMessageType;

@end
