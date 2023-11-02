
@interface _MBUser : NSObject {
    bool  _isPrimaryUser;
}

@property (nonatomic) bool isPrimaryUser;

+ (id)currentUser;

- (id)description;
- (id)initWithUser:(id)arg1;
- (bool)isPrimaryUser;
- (void)setIsPrimaryUser:(bool)arg1;

@end
