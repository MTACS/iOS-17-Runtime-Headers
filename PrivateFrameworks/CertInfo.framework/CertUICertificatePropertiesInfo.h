
@interface CertUICertificatePropertiesInfo : NSObject {
    NSArray * _sectionTitles;
    NSArray * _sections;
}

@property (nonatomic, retain) NSArray *sectionTitles;
@property (nonatomic, retain) NSArray *sections;

- (void).cxx_destruct;
- (id)_cellInfosForSection:(id)arg1;
- (id)_copyPropertiesFromTrust:(struct __SecTrust { }*)arg1;
- (id)_sectionInfoForCertSection:(id)arg1 title:(id)arg2;
- (id)_sectionsFromProperties:(id)arg1;
- (id)_sendablePropertiesFromProperties:(id)arg1;
- (id)_sendablePropertiesFromTrust:(struct __SecTrust { }*)arg1;
- (id)_sendablePropertyFromProperty:(id)arg1;
- (void)_setup:(id)arg1;
- (id)initWithCertificate:(struct __SecCertificate { }*)arg1;
- (id)initWithCertificateProperties:(id)arg1;
- (id)initWithSendableCertificateProperties:(id)arg1;
- (id)initWithTrust:(struct __SecTrust { }*)arg1;
- (id)sectionTitles;
- (id)sections;
- (void)setSectionTitles:(id)arg1;
- (void)setSections:(id)arg1;

@end
