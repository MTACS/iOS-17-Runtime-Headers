
@interface GKInterface : NSObject {
    NSString * _bsdName;
    NSNumber * _index;
    unsigned int  _priority;
    NSString * _type;
}

@property (nonatomic, copy) NSString *bsdName;
@property (nonatomic, retain) NSNumber *index;
@property (nonatomic) unsigned int priority;
@property (nonatomic, copy) NSString *type;

+ (id)bsdNameForIndex:(id)arg1;
+ (id)interfaceWithInterfaceIndex:(id)arg1;

- (id)bsdName;
- (void)dealloc;
- (id)description;
- (id)index;
- (unsigned int)priority;
- (void)setBsdName:(id)arg1;
- (void)setIndex:(id)arg1;
- (void)setPriority:(unsigned int)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end
