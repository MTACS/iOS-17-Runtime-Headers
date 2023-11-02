
@interface NSURLSessionTaskDependencyDescription : NSObject {
    __NSURLSessionTaskDependencyResourceIdentifier * _dependent;
    NSString * _dependentMimeType;
    NSString * _dependentURLPath;
    bool  _exclusive;
    __NSURLSessionTaskDependencyResourceIdentifier * _parent;
    NSString * _parentMimeType;
    NSString * _parentURLPath;
    float  _priority;
}

@property (readonly) NSString *dependentMimeType;
@property (readonly) NSString *dependentURLPath;
@property (nonatomic) bool exclusive;
@property (readonly) NSString *parentMimeType;
@property (readonly) NSString *parentURLPath;
@property (nonatomic) float priority;

+ (id)taskDependencyDescriptionWithMimeType:(id)arg1 parentMimeType:(id)arg2;
+ (id)taskDependencyDescriptionWithMimeType:(id)arg1 parentURLPath:(id)arg2;
+ (id)taskDependencyDescriptionWithParentMimeType:(id)arg1;
+ (id)taskDependencyDescriptionWithParentURLPath:(id)arg1;
+ (id)taskDependencyDescriptionWithURLPath:(id)arg1 parentMimeType:(id)arg2;
+ (id)taskDependencyDescriptionWithURLPath:(id)arg1 parentURLPath:(id)arg2;

- (void)dealloc;
- (id)dependentMimeType;
- (id)dependentURLPath;
- (id)description;
- (bool)exclusive;
- (id)parentMimeType;
- (id)parentURLPath;
- (float)priority;
- (void)setExclusive:(bool)arg1;
- (void)setPriority:(float)arg1;

@end
