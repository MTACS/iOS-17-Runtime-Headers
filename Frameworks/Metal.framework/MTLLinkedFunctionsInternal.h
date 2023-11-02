
@interface MTLLinkedFunctionsInternal : MTLLinkedFunctions {
    struct MTLLinkedFunctionsPrivate { 
        NSArray *functions; 
        NSArray *privateFunctions; 
        NSArray *binaryFunctions; 
        NSDictionary *groups; 
    }  _private;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)binaryFunctions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)functions;
- (id)groups;
- (unsigned long long)hash;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (id)privateFunctions;
- (void)setBinaryFunctions:(id)arg1;
- (void)setFunctions:(id)arg1;
- (void)setGroups:(id)arg1;
- (void)setPrivateFunctions:(id)arg1;

@end
