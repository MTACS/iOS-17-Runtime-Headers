
@interface DNDSModeAssertionInvalidationRecord : NSObject <DNDSModeAssertionStoreRecordDictionaryEncoding> {
    DNDSModeAssertionRecord * _assertion;
    DNDSModeAssertionInvalidationDetailsRecord * _details;
    NSNumber * _invalidationDate;
    NSString * _reason;
    NSString * _reasonOverride;
    DNDSModeAssertionSourceRecord * _source;
}

@property (nonatomic, retain) DNDSModeAssertionRecord *assertion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) DNDSModeAssertionInvalidationDetailsRecord *details;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *invalidationDate;
@property (nonatomic, retain) NSString *reason;
@property (nonatomic, retain) NSString *reasonOverride;
@property (nonatomic, retain) DNDSModeAssertionSourceRecord *source;
@property (readonly) Class superclass;

+ (id)recordForDictionary:(id)arg1 keys:(const struct { struct { id x_1_1_1; id x_1_1_2; id x_1_1_3; } x1; struct { id x_2_1_1; id x_2_1_2; id x_2_1_3; id x_2_1_4; } x2; struct { id x_3_1_1; id x_3_1_2; id x_3_1_3; id x_3_1_4; id x_3_1_5; id x_3_1_6; } x3; struct { id x_4_1_1; id x_4_1_2; id x_4_1_3; id x_4_1_4; id x_4_1_5; id x_4_1_6; id x_4_1_7; id x_4_1_8; id x_4_1_9; id x_4_1_10; id x_4_1_11; id x_4_1_12; } x4; struct { id x_5_1_1; id x_5_1_2; } x5; struct { id x_6_1_1; id x_6_1_2; id x_6_1_3; id x_6_1_4; id x_6_1_5; id x_6_1_6; } x6; struct { id x_7_1_1; } x7; struct { id x_8_1_1; id x_8_1_2; id x_8_1_3; id x_8_1_4; id x_8_1_5; id x_8_1_6; id x_8_1_7; } x8; struct { id x_9_1_1; id x_9_1_2; id x_9_1_3; id x_9_1_4; } x9; }*)arg2;
+ (id)recordForInvalidation:(id)arg1;

- (void).cxx_destruct;
- (id)assertion;
- (id)details;
- (id)dictionaryWithKeys:(const struct { struct { id x_1_1_1; id x_1_1_2; id x_1_1_3; } x1; struct { id x_2_1_1; id x_2_1_2; id x_2_1_3; id x_2_1_4; } x2; struct { id x_3_1_1; id x_3_1_2; id x_3_1_3; id x_3_1_4; id x_3_1_5; id x_3_1_6; } x3; struct { id x_4_1_1; id x_4_1_2; id x_4_1_3; id x_4_1_4; id x_4_1_5; id x_4_1_6; id x_4_1_7; id x_4_1_8; id x_4_1_9; id x_4_1_10; id x_4_1_11; id x_4_1_12; } x4; struct { id x_5_1_1; id x_5_1_2; } x5; struct { id x_6_1_1; id x_6_1_2; id x_6_1_3; id x_6_1_4; id x_6_1_5; id x_6_1_6; } x6; struct { id x_7_1_1; } x7; struct { id x_8_1_1; id x_8_1_2; id x_8_1_3; id x_8_1_4; id x_8_1_5; id x_8_1_6; id x_8_1_7; } x8; struct { id x_9_1_1; id x_9_1_2; id x_9_1_3; id x_9_1_4; } x9; }*)arg1 options:(unsigned long long)arg2;
- (id)invalidationDate;
- (id)object;
- (id)reason;
- (id)reasonOverride;
- (void)setAssertion:(id)arg1;
- (void)setDetails:(id)arg1;
- (void)setInvalidationDate:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setReasonOverride:(id)arg1;
- (void)setSource:(id)arg1;
- (id)source;

@end
