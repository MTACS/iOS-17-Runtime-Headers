
@interface DTKPCPU : NSObject {
    NSMutableArray * _events;
    struct kpep_db { } * _kpepDB;
    NSString * _lookupName;
    NSString * _name;
}

@property (nonatomic, retain) NSMutableArray *events;
@property (nonatomic, readonly, retain) NSString *name;

+ (id)cpuNamed:(id)arg1 fromSerializedData:(id)arg2 error:(id*)arg3;
+ (void)initialize;
+ (id)localCPU:(id*)arg1;

- (void).cxx_destruct;
- (id)_fixupAlias:(id)arg1;
- (id)allAliasAndNameStrings;
- (void)dealloc;
- (id)description;
- (id)eventFromName:(id)arg1;
- (id)eventFromNameOrAlias:(id)arg1;
- (id)events;
- (id)initWithName:(id)arg1 database:(struct kpep_db { }*)arg2;
- (struct kpep_db { }*)kpepDB;
- (id)mnemonicToAliasMapping;
- (id)name;
- (void)setEvents:(id)arg1;

@end
