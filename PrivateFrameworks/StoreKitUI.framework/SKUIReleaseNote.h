
@interface SKUIReleaseNote : NSObject {
    NSString * _changeNotes;
    NSDate * _date;
    NSString * _versionString;
}

@property (nonatomic, readonly) NSString *changeNotes;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *versionString;

+ (id)dateFormatter;

- (void).cxx_destruct;
- (id)changeNotes;
- (id)date;
- (id)initWithReleaseNoteDictionary:(id)arg1 dateFormatter:(id)arg2;
- (id)versionString;

@end
