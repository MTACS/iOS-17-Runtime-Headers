
@interface _UIDebugLogNodeTreeStyle : NSObject {
    NSString * _intermediate;
    NSString * _lastNode;
    NSString * _node;
    NSString * _trailing;
}

@property (nonatomic, readonly) NSString *intermediate;
@property (nonatomic, readonly) NSString *lastNode;
@property (nonatomic, readonly) NSString *node;
@property (nonatomic, readonly) NSString *trailing;

+ (id)defaultStyle;
+ (id)styleWithNode:(id)arg1 lastNode:(id)arg2 intermediate:(id)arg3 trailing:(id)arg4;

- (void).cxx_destruct;
- (id)initWithNode:(id)arg1 lastNode:(id)arg2 intermediate:(id)arg3 trailing:(id)arg4;
- (id)intermediate;
- (id)lastNode;
- (id)node;
- (id)trailing;

@end
