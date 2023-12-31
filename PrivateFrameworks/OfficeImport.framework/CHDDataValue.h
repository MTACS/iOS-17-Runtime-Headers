
@interface CHDDataValue : NSObject {
    struct CHDDataPoint { 
        unsigned long long index; 
        struct EDValue { 
            int type; 
            union { 
                bool boolean; 
                double number; 
                char *string; 
                unsigned long long stringIndex; 
                int error; 
            } ; 
        } value; 
        unsigned long long contentFormatId; 
    }  mDataPoint;
}

+ (id)dataValue;
+ (id)dataValueWithIndex:(long long)arg1 value:(struct EDValue { int x1; union { bool x_2_1_1; double x_2_1_2; char *x_2_1_3; unsigned long long x_2_1_4; int x_2_1_5; } x2; }*)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)contentFormatId;
- (id)contentFormatWithResources:(id)arg1;
- (struct CHDDataPoint { unsigned long long x1; struct EDValue { int x_2_1_1; union { bool x_2_2_1; double x_2_2_2; char *x_2_2_3; unsigned long long x_2_2_4; int x_2_2_5; } x_2_1_2; } x2; unsigned long long x3; }*)dataPoint;
- (id)description;
- (long long)index;
- (id)init;
- (id)initWithIndex:(long long)arg1 value:(struct EDValue { int x1; union { bool x_2_1_1; double x_2_1_2; char *x_2_1_3; unsigned long long x_2_1_4; int x_2_1_5; } x2; }*)arg2;
- (void)setContentFormatId:(unsigned long long)arg1;
- (void)setContentFormatWithResources:(id)arg1 resources:(id)arg2;
- (void)setDataPoint:(struct CHDDataPoint { unsigned long long x1; struct EDValue { int x_2_1_1; union { bool x_2_2_1; double x_2_2_2; char *x_2_2_3; unsigned long long x_2_2_4; int x_2_2_5; } x_2_1_2; } x2; unsigned long long x3; }*)arg1;
- (void)setIndex:(long long)arg1;
- (void)setValue:(struct EDValue { int x1; union { bool x_2_1_1; double x_2_1_2; char *x_2_1_3; unsigned long long x_2_1_4; int x_2_1_5; } x2; }*)arg1;
- (struct EDValue { int x1; union { bool x_2_1_1; double x_2_1_2; char *x_2_1_3; unsigned long long x_2_1_4; int x_2_1_5; } x2; }*)value;

@end
