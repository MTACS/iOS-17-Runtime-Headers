
@interface TSDCanvasSelection : TSKSelection <NSCopying, TSDCanvasSelection> {
    TSDDrawableInfo<TSDContainerInfo> * mContainer;
    NSSet * mInfos;
}

@property (nonatomic, readonly) TSDDrawableInfo<TSDContainerInfo> *container;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long infoCount;
@property (nonatomic, readonly) NSSet *infos;
@property (nonatomic, readonly) bool isEmpty;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long unlockedInfoCount;
@property (nonatomic, readonly) NSSet *unlockedInfos;

+ (id)emptySelection;

- (id)container;
- (bool)containsKindOfClass:(Class)arg1;
- (bool)containsUnlockedKindOfClass:(Class)arg1;
- (id)copyExcludingInfo:(id)arg1;
- (id)copyIncludingInfo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)infoCount;
- (id)infos;
- (id)infosOfClass:(Class)arg1;
- (id)initWithInfos:(id)arg1;
- (id)initWithInfos:(id)arg1 andContainer:(id)arg2;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (unsigned long long)unlockedInfoCount;
- (id)unlockedInfos;

@end
