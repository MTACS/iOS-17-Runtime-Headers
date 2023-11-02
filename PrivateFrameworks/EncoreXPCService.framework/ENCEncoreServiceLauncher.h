
@interface ENCEncoreServiceLauncher : NSObject {
    EncoreService * _encoreService;
}

@property (nonatomic, readonly) EncoreService *encoreService;

- (void).cxx_destruct;
- (id)encoreService;
- (id)init;

@end
