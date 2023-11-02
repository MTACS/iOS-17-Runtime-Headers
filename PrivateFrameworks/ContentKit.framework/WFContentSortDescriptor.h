
@interface WFContentSortDescriptor : NSObject <WFContentPropertyContainer> {
    bool  _ascending;
    id /* block */  _comparator;
    WFContentProperty * _property;
}

@property (nonatomic, readonly) bool ascending;
@property (nonatomic, readonly, copy) id /* block */ comparator;
@property (nonatomic, readonly) NSSet *containedProperties;
@property (nonatomic, readonly) WFContentProperty *property;

+ (id)randomSortDescriptor;
+ (id)sortDescriptorWithProperty:(id)arg1 ascending:(bool)arg2 comparator:(id /* block */)arg3;

- (void).cxx_destruct;
- (bool)ascending;
- (id /* block */)comparator;
- (id)containedProperties;
- (id)description;
- (id)initWithProperty:(id)arg1 ascending:(bool)arg2 comparator:(id /* block */)arg3;
- (id)property;

@end
