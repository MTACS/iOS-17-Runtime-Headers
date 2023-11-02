
@interface Matrix : NSObject {
    long long  _columns;
    long long  _rows;
    struct CNMatrix<25U, 25U, double> { 
        int (**_vptr$CNMatrixBase)(); 
        unsigned int num_rows_; 
        unsigned int num_cols_; 
        int num_elements_; 
        unsigned int lead_dim_; 
        unsigned int max_num_rows_; 
        unsigned int max_num_cols_; 
        double *data_; 
        struct unique_ptr<double[], std::default_delete<double[]>> { 
            struct __compressed_pair<double *, std::default_delete<double[]>> { 
                double *__value_; 
            } __ptr_; 
        } allocated_data_; 
    }  matrix;
}

@property (nonatomic) long long columns;
@property (nonatomic) long long rows;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)add:(id)arg1;
- (id)col:(int)arg1;
- (long long)columns;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)getValueAtRow:(int)arg1 atCol:(int)arg2;
- (id)init;
- (id)initIdentityWithRows:(long long)arg1;
- (id)initOnesWithRows:(long long)arg1 withCols:(long long)arg2;
- (id)initWithMatrix:(struct CNMatrix<25U, 25U, double> { int (**x1)(); unsigned int x2; unsigned int x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7; double *x8; struct unique_ptr<double[], std::default_delete<double[]>> { struct __compressed_pair<double *, std::default_delete<double[]>> { double *x_1_2_1; } x_9_1_1; } x9; })arg1;
- (id)initWithRepeating:(double)arg1 rows:(long long)arg2 columns:(long long)arg3;
- (id)initWithRows:(long long)arg1 withCols:(long long)arg2;
- (id)initZerosWithRows:(long long)arg1 withCols:(long long)arg2;
- (id)inv;
- (id)mul:(id)arg1;
- (void)print;
- (id)row:(int)arg1;
- (long long)rows;
- (id)scale:(double)arg1;
- (void)setColumns:(long long)arg1;
- (void)setRows:(long long)arg1;
- (void)setValue:(double)arg1 atRow:(int)arg2 atCol:(int)arg3;
- (void)setZeros;
- (id)sqrt;
- (id)sub:(id)arg1;
- (id)transpose;

@end
