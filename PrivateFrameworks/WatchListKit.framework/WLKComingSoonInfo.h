
@interface WLKComingSoonInfo : NSObject {
    NSString * _brandID;
    bool  _comingSoon;
    NSString * _dateFormat;
    NSString * _dateString;
    unsigned long long  _precision;
}

@property (nonatomic, readonly, copy) NSString *brandID;
@property (getter=isComingSoon, nonatomic, readonly) bool comingSoon;
@property (nonatomic, readonly, copy) NSString *dateFormat;
@property (nonatomic, readonly, copy) NSString *dateString;
@property (nonatomic, readonly) unsigned long long precision;

+ (id)comingSoonItemsWithDictionaries:(id)arg1;

- (void).cxx_destruct;
- (void)_initializeDatesStrings;
- (id)brandID;
- (id)dateFormat;
- (id)dateString;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 brandID:(id)arg2;
- (bool)isComingSoon;
- (unsigned long long)precision;

@end
