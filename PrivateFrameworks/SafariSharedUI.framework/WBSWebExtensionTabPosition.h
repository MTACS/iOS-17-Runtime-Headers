
@interface WBSWebExtensionTabPosition : NSObject {
    unsigned long long  _index;
    double  _windowID;
}

@property (nonatomic, readonly) unsigned long long index;
@property (nonatomic, readonly) double windowID;

- (unsigned long long)index;
- (id)initWithTab:(id)arg1;
- (double)windowID;

@end
