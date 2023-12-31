
@interface AKModelController : NSObject {
    AKSparseMutableControllerArray * _mutablePageModelControllers;
}

@property (readonly) NSArray *pageModelControllers;

- (void).cxx_destruct;
- (id)allSelectedAnnotations;
- (id)archivedPageModelControllers;
- (void)deleteAllSelectedAnnotations;
- (void)deselectAllAnnotations;
- (id)init;
- (void)insertObject:(id)arg1 inPageModelControllersAtIndex:(unsigned long long)arg2;
- (void)insertPageModelControllers:(id)arg1 atIndexes:(id)arg2;
- (id)pageModelControllerForAnnotation:(id)arg1;
- (id)pageModelControllerForPage:(unsigned long long)arg1;
- (id)pageModelControllers;
- (bool)populateFromArchivedPageModelControllers:(id)arg1;
- (void)removeObjectFromPageModelControllersAtIndex:(unsigned long long)arg1;
- (void)removePageModelControllersAtIndexes:(id)arg1;
- (void)replaceObjectInPageModelControllersAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)replacePageModelControllersAtIndexes:(id)arg1 withPageModelControllers:(id)arg2;

@end
