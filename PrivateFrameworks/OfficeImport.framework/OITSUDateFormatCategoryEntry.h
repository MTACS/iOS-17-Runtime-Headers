
@interface OITSUDateFormatCategoryEntry : NSObject {
    NSMutableSet * _formatStrings;
    NSMutableArray * _formatters;
    unsigned short  _separator;
}

- (void).cxx_destruct;
- (void)addFormat:(id)arg1 locale:(id)arg2;
- (id)formatStrings;
- (id)initWithSeparator:(unsigned short)arg1;
- (id)newDateFromString:(id)arg1 forceAllowAMPM:(bool)arg2 successfulFormatString:(id*)arg3 perfect:(bool*)arg4;
- (unsigned short)separator;

@end
