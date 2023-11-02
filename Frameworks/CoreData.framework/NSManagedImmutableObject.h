
@interface NSManagedImmutableObject : NSObject

@property (readonly) NSEntityDescription *entity;
@property (readonly) NSManagedObjectID *objectID;

+ (struct { int x1; void *x2; id x3; unsigned long long x4; unsigned char x5; unsigned long long x6; void *x7; id x8; char *x9; struct _moFactoryClassFlags { unsigned int x_10_1_1 : 1; unsigned int x_10_1_2 : 1; unsigned int x_10_1_3 : 1; unsigned int x_10_1_4 : 1; unsigned int x_10_1_5 : 1; unsigned int x_10_1_6 : 1; unsigned int x_10_1_7 : 26; } x10; }*)_PFMOClassFactoryData;
+ (bool)_isGeneratedClass;
+ (bool)_isGeneratedClass_1;
+ (void)_release_1;
+ (id)_retain_1;
+ (id)allocWithEntity:(id)arg1;
+ (Class)classForEntity:(id)arg1;
+ (void)release;
+ (id)retain;

- (int (*)methodForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (id)valueForKey:(id)arg1;

@end
