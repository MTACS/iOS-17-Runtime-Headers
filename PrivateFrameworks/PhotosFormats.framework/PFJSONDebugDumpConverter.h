
@interface PFJSONDebugDumpConverter : NSObject {
    id /* block */  _unknownTypeHandler;
}

@property (copy) id /* block */ unknownTypeHandler;

- (void).cxx_destruct;
- (id)JSONCompatibleObjectForObject:(id)arg1;
- (id)JSONForObject:(id)arg1 error:(id*)arg2;
- (id)initWithUnknownTypeHandler:(id /* block */)arg1;
- (void)setUnknownTypeHandler:(id /* block */)arg1;
- (id)unknownObjectTypePlaceholderForObject:(id)arg1;
- (id /* block */)unknownTypeHandler;

@end
