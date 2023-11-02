
@interface MTRSoftwareDiagnosticsClusterThreadMetricsStruct : NSObject <NSCopying> {
    NSNumber * _id;
    NSString * _name;
    NSNumber * _stackFreeCurrent;
    NSNumber * _stackFreeMinimum;
    NSNumber * _stackSize;
}

@property (nonatomic, copy) NSNumber *id;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSNumber *stackFreeCurrent;
@property (nonatomic, copy) NSNumber *stackFreeMinimum;
@property (nonatomic, copy) NSNumber *stackSize;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)id;
- (id)init;
- (id)name;
- (void)setId:(id)arg1;
- (void)setName:(id)arg1;
- (void)setStackFreeCurrent:(id)arg1;
- (void)setStackFreeMinimum:(id)arg1;
- (void)setStackSize:(id)arg1;
- (id)stackFreeCurrent;
- (id)stackFreeMinimum;
- (id)stackSize;

@end
