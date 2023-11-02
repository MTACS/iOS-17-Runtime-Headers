
@interface _DDNearFieldTap : NSObject {
    void contactIdentifier;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  date;
    void identifier;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithDate:(id)arg1 identifier:(id)arg2 contactIdentifier:(id)arg3;

@end
