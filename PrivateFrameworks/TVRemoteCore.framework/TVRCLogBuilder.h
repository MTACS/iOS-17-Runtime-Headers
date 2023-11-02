
@interface TVRCLogBuilder : NSObject {
    NSString * _context;
    NSString * _name;
}

@property (nonatomic, readonly, copy) NSString *context;
@property (nonatomic, readonly, copy) NSObject<OS_os_log> *logger;
@property (nonatomic, readonly, copy) NSString *name;

- (void).cxx_destruct;
- (id)_dataSetFromArray:(id)arg1;
- (id)_templateForDataSetData:(id)arg1;
- (id)context;
- (id)initWithContext:(id)arg1 name:(id)arg2;
- (id)jsonForArray:(id)arg1;
- (id)jsonForDictionary:(id)arg1;
- (id)jsonForError:(id)arg1;
- (id)logger;
- (id)name;

@end
