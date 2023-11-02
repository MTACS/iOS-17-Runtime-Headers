
@interface ICASCollaborationItemType : NSObject <AADataType> {
    long long  _collaborationItemType;
}

@property (nonatomic, readonly) long long collaborationItemType;

- (long long)collaborationItemType;
- (id)initWithCollaborationItemType:(long long)arg1;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
