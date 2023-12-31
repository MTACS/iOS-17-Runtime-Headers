
@interface SXComponentBookmark : NSObject <SXBookmark> {
    NSString * _componentIdentifier;
}

@property (nonatomic, readonly, copy) NSString *componentIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)componentIdentifier;
- (id)initWithComponentIdentifier:(id)arg1;

@end
