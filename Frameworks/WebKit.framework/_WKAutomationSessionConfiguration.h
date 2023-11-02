
@interface _WKAutomationSessionConfiguration : NSObject <NSCopying> {
    bool  _acceptInsecureCertificates;
    bool  _allowsInsecureMediaCapture;
    bool  _suppressesICECandidateFiltering;
}

@property (nonatomic) bool acceptInsecureCertificates;
@property (nonatomic) bool allowsInsecureMediaCapture;
@property (nonatomic) bool suppressesICECandidateFiltering;

- (bool)acceptInsecureCertificates;
- (bool)allowsInsecureMediaCapture;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setAcceptInsecureCertificates:(bool)arg1;
- (void)setAllowsInsecureMediaCapture:(bool)arg1;
- (void)setSuppressesICECandidateFiltering:(bool)arg1;
- (bool)suppressesICECandidateFiltering;

@end
