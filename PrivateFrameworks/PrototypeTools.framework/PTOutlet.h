
@interface PTOutlet : NSObject <NSSecureCoding> {
    NSMutableDictionary * _actionsByToken;
    unsigned long long  _nextToken;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (void)_invokeActions;
- (id)addAction:(id /* block */)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)removeActionForToken:(id)arg1;

@end
