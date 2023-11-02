
@interface OADColorMap : NSObject {
    NSMutableDictionary * mMappings;
}

- (void).cxx_destruct;
- (void)addDefaultMappings:(bool)arg1;
- (void)addMapping:(int)arg1 index:(int)arg2;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (int)mappingForIndex:(int)arg1;

@end
