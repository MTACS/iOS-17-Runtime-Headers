
@interface DNDSModeAssertionInvalidationPredicateRecord : NSObject <DNDSModeAssertionStoreRecordDictionaryEncoding> {
    NSArray * _UUIDs;
    NSArray * _clientIdentifiers;
    NSNumber * _date;
    NSString * _predicateType;
}

@property (nonatomic, retain) NSArray *UUIDs;
@property (nonatomic, retain) NSArray *clientIdentifiers;
@property (nonatomic, retain) NSNumber *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *predicateType;
@property (readonly) Class superclass;

+ (id)recordForDictionary:(id)arg1 keys:(const struct { struct { id x_1_1_1; id x_1_1_2; id x_1_1_3; } x1; struct { id x_2_1_1; id x_2_1_2; id x_2_1_3; id x_2_1_4; } x2; struct { id x_3_1_1; id x_3_1_2; id x_3_1_3; id x_3_1_4; id x_3_1_5; id x_3_1_6; } x3; struct { id x_4_1_1; id x_4_1_2; id x_4_1_3; id x_4_1_4; id x_4_1_5; id x_4_1_6; id x_4_1_7; id x_4_1_8; id x_4_1_9; id x_4_1_10; id x_4_1_11; id x_4_1_12; } x4; struct { id x_5_1_1; id x_5_1_2; } x5; struct { id x_6_1_1; id x_6_1_2; id x_6_1_3; id x_6_1_4; id x_6_1_5; id x_6_1_6; } x6; struct { id x_7_1_1; } x7; struct { id x_8_1_1; id x_8_1_2; id x_8_1_3; id x_8_1_4; id x_8_1_5; id x_8_1_6; id x_8_1_7; } x8; struct { id x_9_1_1; id x_9_1_2; id x_9_1_3; id x_9_1_4; } x9; }*)arg2;
+ (id)recordForInvalidationPredicate:(id)arg1;

- (void).cxx_destruct;
- (id)UUIDs;
- (id)clientIdentifiers;
- (id)date;
- (id)dictionaryWithKeys:(const struct { struct { id x_1_1_1; id x_1_1_2; id x_1_1_3; } x1; struct { id x_2_1_1; id x_2_1_2; id x_2_1_3; id x_2_1_4; } x2; struct { id x_3_1_1; id x_3_1_2; id x_3_1_3; id x_3_1_4; id x_3_1_5; id x_3_1_6; } x3; struct { id x_4_1_1; id x_4_1_2; id x_4_1_3; id x_4_1_4; id x_4_1_5; id x_4_1_6; id x_4_1_7; id x_4_1_8; id x_4_1_9; id x_4_1_10; id x_4_1_11; id x_4_1_12; } x4; struct { id x_5_1_1; id x_5_1_2; } x5; struct { id x_6_1_1; id x_6_1_2; id x_6_1_3; id x_6_1_4; id x_6_1_5; id x_6_1_6; } x6; struct { id x_7_1_1; } x7; struct { id x_8_1_1; id x_8_1_2; id x_8_1_3; id x_8_1_4; id x_8_1_5; id x_8_1_6; id x_8_1_7; } x8; struct { id x_9_1_1; id x_9_1_2; id x_9_1_3; id x_9_1_4; } x9; }*)arg1 options:(unsigned long long)arg2;
- (id)object;
- (id)predicateType;
- (void)setClientIdentifiers:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setPredicateType:(id)arg1;
- (void)setUUIDs:(id)arg1;

@end
