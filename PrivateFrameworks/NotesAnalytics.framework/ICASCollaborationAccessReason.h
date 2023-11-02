
@interface ICASCollaborationAccessReason : NSObject <AADataType> {
    long long  _collaborationAccessReason;
}

@property (nonatomic, readonly) long long collaborationAccessReason;

- (long long)collaborationAccessReason;
- (id)initWithCollaborationAccessReason:(long long)arg1;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
