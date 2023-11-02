
@interface _OSLogDirectoryReference : NSObject {
    long long  _etk;
    int  _fd;
}

@property (nonatomic, readonly) int fileDescriptor;

- (void)close;
- (void)dealloc;
- (int)fileDescriptor;
- (id)initWithDescriptor:(int)arg1;
- (id)initWithDescriptor:(int)arg1 sandboxExtensionToken:(const char *)arg2;

@end
