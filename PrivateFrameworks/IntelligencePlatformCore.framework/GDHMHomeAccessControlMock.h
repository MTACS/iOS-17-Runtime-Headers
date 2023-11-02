
@interface GDHMHomeAccessControlMock : NSObject {
    bool  _isAdminAnswer;
}

@property (getter=isAdministrator, nonatomic, readonly) bool administrator;

- (id)initWithIsAdminAnswer:(bool)arg1;
- (bool)isAdministrator;

@end
