
@interface PBFDataFreshnessState : NSObject <NSCopying, NSMutableCopying> {
    NSSet * _dataComponents;
    NSSet * _freshnessProviders;
}

@property (nonatomic, readonly) NSSet *dataComponents;
@property (getter=isFresh, nonatomic, readonly) bool fresh;
@property (nonatomic, readonly) NSSet *freshComponents;
@property (nonatomic, readonly) NSString *freshnessDebugDescription;
@property (nonatomic, retain) NSSet *freshnessProviders;
@property (nonatomic, readonly) NSSet *outOfDateComponents;

+ (id)new;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataComponents;
- (void)dumpFreshnessStateToLogCategory:(id)arg1 type:(unsigned char)arg2;
- (void)enumerateComponentEntities:(id /* block */)arg1;
- (id)freshComponents;
- (id)freshnessDebugDescription;
- (id)freshnessProviders;
- (id)init;
- (id)initWithFreshnessProvider:(id)arg1;
- (bool)isDataComponentFresh:(id)arg1;
- (bool)isFresh;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)outOfDateComponents;
- (void)setFreshnessProviders:(id)arg1;

@end
