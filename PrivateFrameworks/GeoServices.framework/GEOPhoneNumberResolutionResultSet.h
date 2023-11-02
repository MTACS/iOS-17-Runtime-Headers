
@interface GEOPhoneNumberResolutionResultSet : NSObject {
    PNRPhoneNumberResolutionResultSet * _pnrResultSet;
}

- (void).cxx_destruct;
- (id)description;
- (void)enumerateResolutionsUsingBlock:(id /* block */)arg1;
- (id)initWithPNRResultSet:(id)arg1;

@end
