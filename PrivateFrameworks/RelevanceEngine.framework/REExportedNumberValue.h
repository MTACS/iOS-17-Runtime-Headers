
@interface REExportedNumberValue : REExportedValue {
    NSNumber * _number;
}

- (void).cxx_destruct;
- (id)initWithNumber:(id)arg1;
- (id)numberValue;
- (unsigned long long)type;

@end
