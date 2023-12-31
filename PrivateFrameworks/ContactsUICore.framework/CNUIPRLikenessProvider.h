
@interface CNUIPRLikenessProvider : NSObject <CNUIPRLikenessProvider> {
    PRLikeness * _likeness;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PRLikeness *likeness;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_cnui_likeness;
- (unsigned long long)_cnui_likenessType;
- (id)initWithPRLikeness:(id)arg1;
- (id)likeness;

@end
