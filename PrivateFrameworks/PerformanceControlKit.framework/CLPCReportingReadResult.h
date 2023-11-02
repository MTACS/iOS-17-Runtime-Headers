
@interface CLPCReportingReadResult : NSObject {
    struct array<CLPCReportingRows *, 7UL> { 
        CLPCReportingRows *__elems_[7]; 
    }  rows_by_schema;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)enumerate:(id /* block */)arg1;
- (unsigned long long)hasRowsForSchemaID:(unsigned long long)arg1 error:(id*)arg2;
- (id)init;
- (id)rowsForSchemaID:(unsigned long long)arg1 error:(id*)arg2;

@end
