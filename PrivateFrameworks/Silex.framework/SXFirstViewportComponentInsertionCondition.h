
@interface SXFirstViewportComponentInsertionCondition : NSObject <SXComponentInsertionCondition> {
    bool  _allowFirstViewportException;
}

@property (nonatomic) bool allowFirstViewportException;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)allowFirstViewportException;
- (id)init;
- (id)initWithAllowFirstViewportException:(bool)arg1;
- (void)setAllowFirstViewportException:(bool)arg1;
- (bool)validateMarker:(id)arg1 componentTraits:(unsigned long long)arg2 layoutProvider:(id)arg3;

@end
