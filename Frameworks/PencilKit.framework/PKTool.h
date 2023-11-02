
@interface PKTool : NSObject <NSCopying> {
    PKToolConfiguration * _configuration;
    PKInk * _ink;
}

@property (nonatomic, readonly) PKToolConfiguration *_configuration;
@property (nonatomic, readonly) PKInk *ink;

+ (bool)_inkIsInkingTool:(id)arg1;
+ (id)_toolWithInk:(id)arg1;
+ (id)_toolWithInk:(id)arg1 configuration:(id)arg2;

- (void).cxx_destruct;
- (id)_configuration;
- (id)_initWithInk:(id)arg1;
- (id)_initWithInk:(id)arg1 configuration:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)ink;
- (bool)isEqual:(id)arg1;

@end
