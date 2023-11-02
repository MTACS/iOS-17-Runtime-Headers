
@interface MTLFunctionStitchingInputNode : NSObject <MTLFunctionStitchingNode> {
    unsigned long long  _argumentIndex;
}

@property (nonatomic) unsigned long long argumentIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (unsigned long long)argumentIndex;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)initWithArgumentIndex:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (void)setArgumentIndex:(unsigned long long)arg1;

@end
