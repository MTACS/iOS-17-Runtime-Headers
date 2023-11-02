
@interface CNPRPosterLevelSet : NSObject {
    PRPosterLevelSet * _wrappedLevelSet;
}

@property (nonatomic, readonly) PRPosterLevelSet *wrappedLevelSet;

- (void).cxx_destruct;
- (id)initWithWrappedLevelSet:(id)arg1;
- (id)wrappedLevelSet;

@end
