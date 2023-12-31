
@interface _KSUserWordsInfo : NSObject {
    _KSFileEntry * _file;
    NSDate * _modifiedDate;
    unsigned long long  _size;
}

+ (id)filesForLanguage:(id)arg1;
+ (id)infoWithFiles:(id)arg1;
+ (id)infoWithRecord:(id)arg1;
+ (id)keyForData;
+ (id)keyNamesExcludingData;
+ (id)keyboardDirectory;

- (void).cxx_destruct;
- (id)description;
- (id)initWithFiles:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (bool)isBetterThan:(id)arg1;
- (void)saveToRecord:(id)arg1;

@end
