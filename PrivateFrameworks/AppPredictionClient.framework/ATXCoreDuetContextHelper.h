
@interface ATXCoreDuetContextHelper : NSObject {
    id  _context;
}

@property (nonatomic, retain) id context;

- (void).cxx_destruct;
- (id)context;
- (id)fetchDataDictionaryForKeyPath:(id)arg1;
- (id)init;
- (id)lastModifiedDateForKeyPath:(id)arg1;
- (void)setContext:(id)arg1;

@end
