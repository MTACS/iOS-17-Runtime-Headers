
@interface GQHBodyStorage : NSObject <GQBodyStorageGenerator>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (int)handleBodyStorage:(id)arg1 state:(id)arg2;
+ (int)handleContainerHint:(id)arg1 state:(id)arg2;
+ (int)handleFootnotes:(id)arg1 state:(id)arg2;
+ (int)handleLayout:(id)arg1 state:(id)arg2;
+ (int)handlePageStart:(id)arg1 state:(id)arg2;
+ (int)handleSection:(id)arg1 state:(id)arg2;
+ (int)handleTocContent:(id)arg1 state:(id)arg2;
+ (int)handleTocEntry:(id)arg1 state:(id)arg2;

@end
