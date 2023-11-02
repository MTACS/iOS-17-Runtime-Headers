
@interface FCShortcut : NSObject {
    NSDate * _dateAdded;
    bool  _deprecated;
    NSString * _identifier;
    NSNumber * _order;
    unsigned long long  _shortcutType;
}

@property (nonatomic, readonly) CKRecord *asCKRecord;
@property (nonatomic, readonly) NSDate *dateAdded;
@property (getter=isDeprecated, nonatomic, readonly) bool deprecated;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSNumber *order;
@property (nonatomic, readonly) unsigned long long shortcutType;

- (void).cxx_destruct;
- (id)asCKRecord;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateAdded;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 dateAdded:(id)arg2 order:(id)arg3 shortcutType:(unsigned long long)arg4;
- (bool)isDeprecated;
- (id)order;
- (unsigned long long)shortcutType;

@end
