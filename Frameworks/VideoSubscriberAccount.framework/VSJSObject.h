
@interface VSJSObject : NSObject {
    VSJSApp * _context;
}

@property (nonatomic, readonly) VSJSApp *context;

- (void).cxx_destruct;
- (id)context;
- (id)init;
- (id)initWithContext:(id)arg1;

@end
