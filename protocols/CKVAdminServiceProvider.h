
@protocol CKVAdminServiceProvider <NSObject>

@required

- (NSObject<CKVAdminService> *)adminService;

@end
