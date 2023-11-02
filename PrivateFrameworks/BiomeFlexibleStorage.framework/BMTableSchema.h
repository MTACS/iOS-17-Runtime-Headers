
@interface BMTableSchema : NSObject <NSSecureCoding> {
    NSArray * _columnNames;
}

@property (nonatomic, copy) NSArray *columnNames;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)columnNames;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithColumnNames:(id)arg1;
- (void)setColumnNames:(id)arg1;

@end
