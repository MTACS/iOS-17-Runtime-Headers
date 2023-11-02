
@interface ICASCollaborationAccessType : NSObject <AADataType> {
    long long  _collaborationAccessType;
}

@property (nonatomic, readonly) long long collaborationAccessType;

- (long long)collaborationAccessType;
- (id)initWithCollaborationAccessType:(long long)arg1;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
