
@interface _GEOPhoneNumbersTicket : GEOAbstractMapServiceTicket {
    bool  _allowCellularDataForLookup;
    NSArray * _phoneNumbers;
}

- (void).cxx_destruct;
- (struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })dataRequestKind;
- (id)description;
- (id)initWithPhoneNumbers:(id)arg1 allowCellularDataForLookup:(bool)arg2 traits:(id)arg3;
- (void)submitWithHandler:(id /* block */)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(id /* block */)arg4;

@end
