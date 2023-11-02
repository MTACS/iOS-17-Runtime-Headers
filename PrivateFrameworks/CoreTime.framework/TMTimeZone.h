
@interface TMTimeZone : NSObject {
    NSString * _olsonName;
    NSString * _source;
}

@property (copy) NSString *olsonName;
@property (copy) NSString *source;

+ (id)timeZoneWithOlsonName:(id)arg1 fromSource:(id)arg2;

- (void)dealloc;
- (id)description;
- (bool)hasSameOlsonNameAs:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithOlsonName:(id)arg1 fromSource:(id)arg2;
- (id)olsonName;
- (void)setOlsonName:(id)arg1;
- (void)setSource:(id)arg1;
- (id)source;

@end
