
@interface FSTaskOptionsBundle : NSObject <NSSecureCoding> {
    NSArray * _options;
}

@property (readonly, copy) NSArray *options;

+ (id)newForArguments:(char **)arg1 count:(int)arg2 extension:(id)arg3 operationType:(unsigned char)arg4 errorHandler:(id /* block */)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addOption:(id)arg1;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateOptionsWithBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOptionString:(char **)arg1 count:(int)arg2 optionString:(id)arg3 errorHandler:(id /* block */)arg4;
- (id)options;

@end
