
@interface CNVCardDateComponentsParser : NSObject {
    CNVCardDateComponentsFormatter * _formatter;
    NSCalendar * _gregorianCalendar;
}

- (void).cxx_destruct;
- (id)dateComponentsFromString:(id)arg1 calendarIdentifier:(id)arg2;
- (id)dateComponentsFromString:(id)arg1 omitYear:(long long)arg2;
- (id)dateComponentsWithParser:(id)arg1;
- (id)gregorianDateComponentsWithParser:(id)arg1;
- (id)init;

@end
