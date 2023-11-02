
@interface PTRowAction : NSObject <NSSecureCoding> {
    id /* block */  _handler;
    bool  _isEncodable;
}

@property (nonatomic, readonly) id /* block */ handler;
@property (nonatomic) bool isEncodable;

+ (id)actionWithHandler:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id /* block */)defaultHandler;
- (bool)deselectsRowOnSuccess;
- (void)encodeWithCoder:(id)arg1;
- (id /* block */)handler;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEncodable;
- (bool)isEqual:(id)arg1;
- (void)setIsEncodable:(bool)arg1;

@end
