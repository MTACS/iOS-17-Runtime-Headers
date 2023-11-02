
@interface AXMOutputAction : NSObject {
    AXMOutputActionHandle * _handle;
}

@property (nonatomic, readonly) AXMOutputActionHandle *handle;

- (void).cxx_destruct;
- (id)_initWithHandle:(id)arg1;
- (id)handle;

@end
