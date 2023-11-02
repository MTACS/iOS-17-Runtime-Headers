
@interface ICASCollaborationActionType : NSObject <AADataType> {
    long long  _collaborationActionType;
}

@property (nonatomic, readonly) long long collaborationActionType;

- (long long)collaborationActionType;
- (id)initWithCollaborationActionType:(long long)arg1;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
